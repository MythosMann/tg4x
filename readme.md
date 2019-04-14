![Picture of the Current Prototype](https://raw.githubusercontent.com/MythosMann/tg4x/master/DSC_0726.JPG)
## Summary:

Basically, this would be a ~$30-40 qmk powered, open source mechanical keyboard.  There are basically two ways to build it.
-The first way is using parts from a tg3 "cop car" keyboard. That's where the name comes from, since originally it only supported the tg3 layout. The tg3 keyboards cost about $20, and come with keycaps, switches, and plates.  You need to disassamble and mod the tg3.
-The other way to build it is by using keycaps from your average 108 keycap set.  You would need to get custom plates cut, or somehow do without.  It supports several different bottom row configs, with a 6.25 space and split space option.  This way would be a bit more expensive, because you'd need to find keycaps, switches, and plates.
![KLE layout](https://raw.githubusercontent.com/MythosMann/tg4x/master/kle-layout.png)
## The base (TG3):

In case you didn't know, the TG3 is some kind of industrial keyboard. They're available for super cheap, and they're quite common (at least here in the CONUS). They come with genuine Cherry MX black switches. They also have this rubber membrane that goes over all the switches to keep dust and liquids out. You can use the membrane to add weight and tactility to the switches if you want. The TG3 comes with thin doubleshot (ABS I think) keycaps with a uniform profile. I think I heard somewhere that they're R1 DCS keycaps.

[Ebay listing where I've bought several](http://www.ebay.com/itm/132873035023)

## Pricing:

I'm not intending to sell kits for now, but I'd be willing to still sell pcbs.

## The Meaty Potatoes:

I'm going to make a pcb with the layout pictured above. You could change the keymap, since it is qmk driven. However, you would be stuck with the layout. I'm also programming the firmware and making a default keymap. The whole thing will be powered by a pro micro, so after wiring the matrix, it'd have one extra pin. I'm going to use this extra pin for rgb underglow, which would be used for indicating layers and capslock (and overall sex appeal). The rgb would be ws2812b diodes soldered directly to the pcb.

For the hardware, the case will be a sandwich style case using a cut down TG3 mounting plate and a cut down TG3 bottom plate. I'd use probably 8 m2 standoffs to hold the plates together.

![KiCad PCB Layout](https://raw.githubusercontent.com/MythosMann/tg4x/master/pcblayout.png)
![Kicad PCB Render](https://raw.githubusercontent.com/MythosMann/tg4x/master/pcb_raytrace.png)
