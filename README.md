# QMK Userspace

## Official QMK Firmware

### [Setup QMK](https://docs.qmk.fm/newbs_getting_started)

```
cd $HOME

git clone https://github.com/qmk/qmk_firmware qmk_firmware

cd qmk_firmware

sudo apt install -y pipx
pipx ensurepath
pipx install qmk

qmk setup
```

### [Setup QMK Userspace](https://docs.qmk.fm/newbs_external_userspace)

```
cd $HOME

git clone git@github.com:raeffs/qmk-firmware.git qmk_userspace

qmk config user.overlay_dir="$(realpath qmk_userspace)"

cd qmk_userspace

ln -s qmk-official.json qmk.json
```

### Build all targets

```
qmk userspace-compile
```

## Keychron Max QMK Firmware

### [Setup QMK](https://docs.qmk.fm/newbs_getting_started)

```
cd $HOME

git clone https://github.com/qmk/qmk_firmware qmk_firmware

cd qmk_firmware

git checkout wireless_playground

sudo apt install -y pipx
pipx ensurepath
pipx install qmk

qmk setup
```

### [Setup QMK Userspace](https://docs.qmk.fm/newbs_external_userspace)

```
cd $HOME

git clone git@github.com:raeffs/qmk-firmware.git qmk_userspace

qmk config user.overlay_dir="$(realpath qmk_userspace)"

cd qmk_userspace

ln -s qmk-keychron-max.json qmk.json
```

### Build all targets

```
qmk userspace-compile
```
