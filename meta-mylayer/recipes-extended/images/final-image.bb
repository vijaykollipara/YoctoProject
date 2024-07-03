# core-image-base
# require recipes-core/images/core-image-minimal.bb
require recipes-core/images/rpi-basic-image.bb

IMAGE_FEATURES = "ssh-server-dropbear debug-tweaks"
LICENSE = "GPL"
IMAGE_INSTALL_append = " myhello"