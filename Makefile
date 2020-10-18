QARA:=~/bin/qara2c
QMKDIR:=~/src/qmk_firmware

reconfigure:
	$(QARA) < src/config.md > config.h

tangle:
	$(QARA) < src/board.md > sagaris.h
	$(QARA) < src/map.md > keymaps/default/keymap.c

flash: tangle
	cd $(QMKDIR) && make sagaris:default:avrdude

