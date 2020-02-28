QARA:=~/bin/qara2c
CHORDGEN:=ruby chordgen.rb

tangle:
	$(QARA) < src/Config.md > config.h
	$(QARA) < src/Keyboard.md > sagaris.h
	$(QARA) < src/Keymap.md > keymaps/default/keymap.c

gen_chords:
	@echo Generating chords. Quantity:
	$(CHORDGEN) --count-chords
	@echo Please enter the number into the config manually.
	$(CHORDGEN) > keymaps/default/chords.h

flash: tangle
	cd ~/src/qmk_firmware && make sagaris:default:avrdude

