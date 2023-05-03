# PYTHIA configuration file.
# Generated on Wed Mar 1 08:48:22 UTC 2023 with the user supplied options:
# --prefix=/usr/local/venv
# --arch=Linux
# --cxx=g++
# --with-gzip
# --with-hepmc2=/usr/local/venv
# --with-lhapdf6=/usr/local/venv
# --with-fastjet3=/usr/local/venv
# --with-python-bin=/usr/local/venv/bin/
# --with-python-lib=/usr/local/venv/lib/python3.9
# --with-python-include=/usr/local/include/python3.9
# --cxx-common=-O2 -m64 -pedantic -W -Wall -Wshadow -fPIC -std=c++17
# --cxx-shared=-shared -std=c++17

# Install directory prefixes.
PREFIX_BIN=/usr/local/venv/bin
PREFIX_INCLUDE=/usr/local/venv/include
PREFIX_LIB=/usr/local/venv/lib
PREFIX_SHARE=/usr/local/venv/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
CXX=g++
CXX_COMMON=-O2 -m64 -pedantic -W -Wall -Wshadow -fPIC -std=c++17 -DGZIP
CXX_SHARED=-shared -std=c++17
CXX_SONAME=-Wl,-soname,
LIB_SUFFIX=.so
OBJ_COMMON=

EVTGEN_USE=false
EVTGEN_CONFIG=
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

FASTJET3_USE=true
FASTJET3_CONFIG=fastjet-config
FASTJET3_BIN=/usr/local/venv/bin/
FASTJET3_INCLUDE=-I/usr/local/venv/include
FASTJET3_LIB=-L/usr/local/venv/lib -Wl,-rpath,/usr/local/venv/lib -lfastjet

HEPMC2_USE=true
HEPMC2_CONFIG=
HEPMC2_BIN=/usr/local/venv/bin/
HEPMC2_INCLUDE=-I/usr/local/venv/include
HEPMC2_LIB=-L/usr/local/venv/lib -Wl,-rpath,/usr/local/venv/lib -lHepMC

HEPMC3_USE=false
HEPMC3_CONFIG=
HEPMC3_BIN=
HEPMC3_INCLUDE=
HEPMC3_LIB=

LHAPDF5_USE=false
LHAPDF5_CONFIG=
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=

LHAPDF6_USE=true
LHAPDF6_CONFIG=lhapdf-config
LHAPDF6_BIN=/usr/local/venv/bin/
LHAPDF6_INCLUDE=-I/usr/local/venv/include
LHAPDF6_LIB=-L/usr/local/venv/lib -Wl,-rpath,/usr/local/venv/lib -lLHAPDF

POWHEG_USE=false
POWHEG_CONFIG=
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

RIVET_USE=false
RIVET_CONFIG=
RIVET_BIN=
RIVET_INCLUDE=
RIVET_LIB=

ROOT_USE=false
ROOT_CONFIG=
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

GZIP_USE=true
GZIP_CONFIG=
GZIP_BIN=
GZIP_INCLUDE=
GZIP_LIB=-lz

PYTHON_USE=true
PYTHON_CONFIG=python-config
PYTHON_BIN=/usr/local/venv/bin/
PYTHON_INCLUDE=-I/usr/local/include/python3.9
PYTHON_LIB=-L/usr/local/venv/lib/python3.9 -Wl,-rpath,/usr/local/venv/lib/python3.9

MG5MES_USE=false
MG5MES_CONFIG=
MG5MES_BIN=
MG5MES_INCLUDE=
MG5MES_LIB=

OPENMP_USE=false
OPENMP_CONFIG=
OPENMP_BIN=
OPENMP_INCLUDE=
OPENMP_LIB=

MPICH_USE=false
MPICH_CONFIG=
MPICH_BIN=
MPICH_INCLUDE=
MPICH_LIB=

HDF5_USE=false
HDF5_CONFIG=
HDF5_BIN=
HDF5_INCLUDE=
HDF5_LIB=

HIGHFIVE_USE=false
HIGHFIVE_CONFIG=
HIGHFIVE_BIN=
HIGHFIVE_INCLUDE=
HIGHFIVE_LIB=
