sudo docker run --rm \
    --privileged \
    -v "${PWD}":/config \
    --device=/dev/ttyUSB0 \
    -e "http_proxy=http://192.168.2.120:7890" \
    -e "https_proxy=http://192.168.2.120:7890" \
    -it ghcr.io/esphome/esphome run ./echo_shit.yaml
