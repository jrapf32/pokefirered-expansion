# JSON files are run through jsonproc, which is a tool that converts JSON data to an output file
# based on an Inja template. https://github.com/pantor/inja

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entries.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.entries.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.strings.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h

AUTO_GEN_TARGETS += include/constants/region_map_sections.h
include/constants/region_map_sections.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.constants.json.txt
	$(JSONPROC) $^ $@

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/heal_locations.h
$(DATA_SRC_SUBDIR)/heal_locations.h: $(DATA_SRC_SUBDIR)/heal_locations.json $(DATA_SRC_SUBDIR)/heal_locations.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/heal_location.o: c_dep += $(DATA_SRC_SUBDIR)/heal_locations.h

AUTO_GEN_TARGETS += include/constants/heal_locations.h
include/constants/heal_locations.h: $(DATA_SRC_SUBDIR)/heal_locations.json $(DATA_SRC_SUBDIR)/heal_locations.constants.json.txt
	$(JSONPROC) $^ $@