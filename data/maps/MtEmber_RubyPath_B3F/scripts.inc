# 1 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"

# 2 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
MtEmber_RubyPath_B3F_MapScripts::
# 3 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	.byte 0
# 4 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"

# 5 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
@ Odd that this is here and not in MtEmber_RubyPath_B5F/scripts.inc
# 6 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Ruby::
# 7 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	lock
# 8 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	faceplayer
# 9 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	setflag FLAG_GOT_RUBY
# 10 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	removeobject LOCALID_RUBY
# 11 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_OBTAIN_KEY_ITEM
# 12 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	release
# 13 "data//maps/MtEmber_RubyPath_B3F/scripts.pory"
	end
