![Picture of the Current Prototype](https://raw.githubusercontent.com/MythosMann/tg4x/master/DSC_0726.JPG)
## Summary:

Basically, this would be a ~$30-40 qmk powered, open source 40% keyboard using parts from a TG3, or "cop car" keyboard. The name comes from the fact that it's a step up (TG4>TG3), but also that it's a 40%(think 4x%). Since the TG3's are so cheap, and they come with switches (mx blacks, too), caps, and plates, they're a great start for a handwired build. However, not many people have the time or resources to make a handwired build.

I wanted to make something that's more fun than buying a Redragon k552, but at the same price point. My goal for this project is to create a great entry point into the wonderful world of keebs. I also might call it the U.C.Kb, for Ultimate College Keyboard. This comes from the price, and the portability.
![KLE layout](https://raw.githubusercontent.com/MythosMann/tg4x/master/kle-layout.png)
## The base (TG3):

In case you didn't know, the TG3 is some kind of industrial keyboard. They're available for super cheap, and they're quite common (at least here in the CONUS). They come with genuine Cherry MX black switches. They also have this rubber membrane that goes over all the switches to keep dust and liquids out. You can use the membrane to add weight and tactility to the switches if you want. The TG3 comes with thin doubleshot (ABS I think) keycaps with a uniform profile. I think I heard somewhere that they're R1 DCS keycaps.

[Ebay listing where I've bought several](http://www.ebay.com/itm/132873035023)

## Pricing:

I'd probably sell it four ways; just a pcb, a barebones kit, a kit with everything you'd need, and fully assembled keyboards. (Prices are nowhere near set in stone, but I'd love to stay close to these prices.  I'm also wanting to be able to include a blank resin keycap with each purchase of a kit.  I've crunched some numbers, and come up with some prices based on quantity.  With a higher quantity, each unit is going to be cheaper, but it will also take me longer to put together. While I am trying to keep these as cheap as possible, I at least want to break even, so I'll have to add a bit to material cost.  Check out the chart below for (I think) final MoQ pricing.

* The barebones kits would be the pcbs, diodes, standoffs, and a pre-programmed controller. You'd need to buy your own TG3 and cut the plates yourself.

* The "fully loaded" kit would include the pcb, diodes, standoffs, and controller, but also the pre-cut plates, switches, and keycaps.

* The fully assembled boards would just be everything, put together, ready to plug and play.

![MoQ Pricing as of Yet](https://raw.githubusercontent.com/MythosMann/tg4x/master/moq_pricing.png)

I'm expecting to only ship CONUS, because international shipping looks super expensive. So far I've looked into USPS and Fedex, and it looks like I'll be able to do $10 flat to CONUS.
Another note, because I'm looking to minimize costs as much as possible, I'll be sourcing most of the components from China, meaning it'll take a while to get the parts together.

## The Meaty Potatoes:

I'm going to make a pcb with the layout pictured above. You could change the keymap, since it is qmk driven. However, you would be stuck with the layout. I'm also programming the firmware and making a default keymap. The whole thing will be powered by a pro micro, so after wiring the matrix, it'd have one extra pin. I'm going to use this extra pin for rgb underglow, which would be used for indicating layers and capslock (and overall sex appeal). The rgb would be ws2812b diodes soldered directly to the pcb.

For the hardware, the case will be a sandwich style case using a cut down TG3 mounting plate and a cut down TG3 bottom plate. I'd use probably 8 m2 standoffs to hold the plates together.

![KiCad PCB Layout](https://raw.githubusercontent.com/MythosMann/tg4x/master/pcblayout.png)
![Kicad PCB Render](https://raw.githubusercontent.com/MythosMann/tg4x/master/pcb_raytrace.png)
