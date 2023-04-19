# MadGraph

## Introduction
We will generate $e^+e^- \to \mu^+\mu^-$ to leading order in QED.

## Setup
First we will use the docker container:
```bash
docker pull scailfin/madgraph5-amc-nlo:mg5_amc3.4.2
```

Then we will run the container mounting the current directory to the container:
```bash
docker run -it --workdir=$PWD --mount type=bind,source=$PWD,target=$PWD scailfin/madgraph5-amc-nlo:mg5_amc3.4.2 bash
```

## Start MadGraph
Once in the container we can start an interactive MadGraph session:
```bash
mg5_aMC
```

## Create Process Directory
To generate events we will use the `generate` command at the MadGraph prompt:
```
MG5_aMC>generate e+ e- > a > mu+ mu- 
```

Here, we explicitly specify $s$-channel production through a photon.
Alternatively, we can exclude production through a Z boson by using the `/` operator:
```
MG5_aMC>generate e+ e- > mu+ mu- / z
```

Now, we can create a new process directory:
```
MG5_aMC>output newprocess
```

## Generate Events
Finally, we can launch event generation:
```
MG5_aMC>launch newprocess
```

Interactive prompts will ask us to edit the `param_card.dat` (which controls physics parameters like particle masses, etc.) and `run_card.dat` (which controls the running conditions like the center-of-mass energy, the number of events to generate, etc.).
We will edit to generate 100,000 events instead of the default of 10,000.
We will also keep the default center-of-mass energy of 1 TeV.

## Analyze Events

We will use the [`analyze_events.ipynb`](analyze_events.ipynb) Jupyter notebook to analyze the events.