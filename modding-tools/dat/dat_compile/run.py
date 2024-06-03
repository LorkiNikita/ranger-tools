import traceback
from pathlib import Path

from rangers.dat import DAT

SIGN = False

_in = Path('CFG')
_out = Path('CFG')

# CacheData.dat
FMT = 'HDCache'  # HDMain 

for filename in _in.rglob('CacheData.txt'):
    try:
        out_name = _out / filename.relative_to(_in).with_suffix('.dat')

        print(f'{filename} -> {out_name}')

        dat = DAT.from_txt(filename)
        out_name.parent.mkdir(exist_ok=True, parents=True)
        dat.to_dat(out_name, fmt=FMT, sign=SIGN)

    except:
        import traceback

        traceback.print_exc()

# Main.dat
FMT = 'HDMain'  # HDMain 

for filename in _in.rglob('Main.txt'):
    try:
        out_name = _out / filename.relative_to(_in).with_suffix('.dat')

        print(f'{filename} -> {out_name}')

        dat = DAT.from_txt(filename)
        out_name.parent.mkdir(exist_ok=True, parents=True)
        dat.to_dat(out_name, fmt=FMT, sign=SIGN)

    except:
        traceback.print_exc()


# Rus/Lang.dat
_in = Path('CFG/Rus')
_out = Path('CFG/Rus')
FMT = 'HDMain'  # HDMain 

for filename in _in.rglob('Lang.txt'):
    try:
        out_name = _out / filename.relative_to(_in).with_suffix('.dat')

        print(f'{filename} -> {out_name}')

        dat = DAT.from_txt(filename)
        out_name.parent.mkdir(exist_ok=True, parents=True)
        dat.to_dat(out_name, fmt=FMT, sign=SIGN)

    except:
        traceback.print_exc()

# Eng/Lang.dat
_in = Path('CFG/Eng')
_out = Path('CFG/Eng')
FMT = 'HDMain'  # HDMain 

for filename in _in.rglob('Lang.txt'):
    try:
        out_name = _out / filename.relative_to(_in).with_suffix('.dat')

        print(f'{filename} -> {out_name}')

        dat = DAT.from_txt(filename)
        out_name.parent.mkdir(exist_ok=True, parents=True)
        dat.to_dat(out_name, fmt=FMT, sign=SIGN)

    except:
        traceback.print_exc()