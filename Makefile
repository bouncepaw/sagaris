QARA:=~/bin/qara2c

tangle:
	$(QARA) < src/Config.md > config.h
	$(QARA) < src/Keyboard.md > sagaris.h
	$(QARA) < src/Keymap.md > keymaps/default/keymap.c

flash: tangle
	cd ~/src/qmk_firmware && make sagaris:default:avrdude

