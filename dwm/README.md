Rey's Dwm inspired by Luke Smith Dwm
============================

Please DO

sudo vim /usr/share/xsessions/dwm.desktop

```vim
[Desktop Entry]
Encoding=UTF-8
Name=Dwm
Comment=Dynamic window manager
Exec=dwm
Icon=dwm
Type=XSession
```


### About mini function firefox
* Verify that the user stylesheets (userChrome) option is enabled:
  * Go to the address about:config in Firefox
  * Search for `toolkit.legacyUserProfileCustomizations.stylesheets`
  * Confirm the option is set to true

* Make sure that you have the Default theme enabled
  * Go to the `address about:addons`
  * Enable the Default theme if not already enabled

* find your firefox directory in ~/.mozilla/firefox/*****.default-release
  * cp `chrome/` dir to your firefox user directory.
  * cd `chrome/` dir and run `./install.sh`
  * add a addon called `Midnight Lizard` (option)
  * add theme `Arctic Nord Theme` (option)
  * apply Nord theme (option)


font
`yay -S ttf-linux-libertine ttf-inconsolata ttf-joypixels ttf-twemoji-color noto-fonts-emoji ttf-liberation ttf-droid`

`yay -S wqy-bitmapfont wqy-microhei wqy-microhei-lite wqy-zenhei adobe-source-han-mono-cn-fonts adobe-source-han-sans-cn-fonts adobe-source-han-serif-cn-fonts`
