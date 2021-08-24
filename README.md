# Night Status Service

### Development
```
sudo docker run \
  -it \
  --name night --rm \
  -p 5001:5001 \
  -v /home/ermiry/Documents/ermiry/Projects/night-status:/home/night \
  -e RUNTIME=development \
  -e PORT=5001 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/night-status:development /bin/bash
```

## Routes

### Main

#### GET /night
**Description:** Night service top level route \
**Returns:**
  - 200 on success

#### GET /night/version
**Access:** Public \
**Description:** Returns night service current version \
**Returns:**
  - 200 and version's json on success
