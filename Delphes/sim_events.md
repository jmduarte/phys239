```bash
docker run -e "DISPLAY=$DISPLAY"  -it --workdir=$PWD --mount type=bind,source=$PWD,target=$PWD ghcr.io/scipp-atlas/mapyde/delphes
$DELPHES_PATH/DelphesHepMC2 delphes_card_CMS.tcl output.root input.hepmc ../Pythia/test_pp_mumu_pythia/Events/run_01/tag_1_pythia8_events.hepmc
```