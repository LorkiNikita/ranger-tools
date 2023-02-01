from pathlib import Path

from rangers.dat import DAT

FMT = 'HDMain'  # HDMain HDCache
SIGN = False

_in = Path('_input/')
_out = Path('_output/')

_in.mkdir(exist_ok=True, parents=True)
_out.mkdir(exist_ok=True, parents=True)

for filename in _in.rglob('*.txt'):
    try:
        out_name = _out / filename.relative_to(_in).with_suffix('.dat')

        print(f'{filename} -> {out_name}')

        dat = DAT.from_txt(filename)
        out_name.parent.mkdir(exist_ok=True, parents=True)
        dat.to_dat(out_name, fmt=FMT, sign=SIGN)

    except:
        import traceback

        traceback.print_exc()
