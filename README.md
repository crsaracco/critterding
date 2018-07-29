# critterding

Fork of http://critterding.sourceforge.net/, which seems to be abandoned.

Critterding is a "petri dish"-style artificial life simulator, with 3D graphics and physics.

For more information, check out the SourceForge page (which I eventually want to capture in this `README.md`).

## Dependencies

 - gcc 4.5+
 - bzip2
 - freetype2
 - SDL
 - boost filesystem 1.43+
 - qt (for textures)

## Building

```
mkdir build
cd build
cp -r ../share .
export CXXFLAGS="-march=native -Ofast"  # Optional, but recommended
cmake ../ -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr
make [-j <threads>]
sudo make install  # Optional, to install the binary on your system
```


## Running

If you installed the binary on your system with `sudo make install`, you can simply run `critterding`.

Otherwise, you can do `./src/critterding`.

There are a lot of command-line arguments and run-time commands you can use;
see [RUNNING.md](RUNNING.md) for more information.

## Contacting

Critterding was originally written by Bob Winckelmans. Check out his
[SourceForge page](http://critterding.sourceforge.net/) for contact details.

Critterding also has an IRC channel:

 - channel: #critterding
 - server: irc.freenode.org

Otherwise, feel free to open an issue on this repository or contact me.
I'm not too familiar with the codebase quite yet, though.

## Contributions

I accept pull requests - see the "License" section below for details.

Feel free to create issues on this repository, as well.

## License

GPL v2. See the [LICENSE](LICENSE) file for more info.

All contributions to this repository will be released under GPL v2.