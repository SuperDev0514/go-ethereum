// Code generated by go-bindata.
// sources:
// faucet.html
// DO NOT EDIT!

package main

import (
	"bytes"
	"compress/gzip"
	"fmt"
	"io"
	"io/ioutil"
	"os"
	"path/filepath"
	"strings"
	"time"
)

func bindataRead(data []byte, name string) ([]byte, error) {
	gz, err := gzip.NewReader(bytes.NewBuffer(data))
	if err != nil {
		return nil, fmt.Errorf("Read %q: %v", name, err)
	}

	var buf bytes.Buffer
	_, err = io.Copy(&buf, gz)
	clErr := gz.Close()

	if err != nil {
		return nil, fmt.Errorf("Read %q: %v", name, err)
	}
	if clErr != nil {
		return nil, err
	}

	return buf.Bytes(), nil
}

type asset struct {
	bytes []byte
	info  os.FileInfo
}

type bindataFileInfo struct {
	name    string
	size    int64
	mode    os.FileMode
	modTime time.Time
}

func (fi bindataFileInfo) Name() string {
	return fi.name
}
func (fi bindataFileInfo) Size() int64 {
	return fi.size
}
func (fi bindataFileInfo) Mode() os.FileMode {
	return fi.mode
}
func (fi bindataFileInfo) ModTime() time.Time {
	return fi.modTime
}
func (fi bindataFileInfo) IsDir() bool {
	return false
}
func (fi bindataFileInfo) Sys() interface{} {
	return nil
}

var _faucetHtml = []byte("\x1f\x8b\x08\x00\x00\x00\x00\x00\x00\xff\xac\x59\xff\x6f\xdb\xb6\xb6\xff\xd9\xfd\x2b\x4e\xf5\xde\x16\x1b\x89\xa4\xa4\x29\xba\xc1\x91\x3c\x14\x5b\x5f\xb7\x87\x8b\x6d\xd8\x3a\xdc\x3b\x6c\xc3\x05\x25\x1d\x49\x4c\x28\x52\x23\x8f\xec\x78\x81\xff\xf7\x0b\x92\x92\x2c\x3b\x4e\xd7\xdd\xee\x97\x54\x24\x0f\x3f\xe7\x2b\xcf\x17\x37\x79\xfe\xd5\x77\x5f\xbe\xfb\xf9\xfb\x37\x50\x53\x23\x56\xcf\x12\xfb\x0f\x08\x26\xab\x34\x40\x19\xac\x9e\xcd\x92\x1a\x59\xb1\x7a\x36\x9b\x25\x0d\x12\x83\xbc\x66\xda\x20\xa5\x41\x47\x65\xf8\x79\xb0\x3f\xa8\x89\xda\x10\x7f\xef\xf8\x3a\x0d\xfe\x15\xfe\xf4\x3a\xfc\x52\x35\x2d\x23\x9e\x09\x0c\x20\x57\x92\x50\x52\x1a\x7c\xf3\x26\xc5\xa2\xc2\xc9\x3d\xc9\x1a\x4c\x83\x35\xc7\x4d\xab\x34\x4d\x48\x37\xbc\xa0\x3a\x2d\x70\xcd\x73\x0c\xdd\xe2\x02\xb8\xe4\xc4\x99\x08\x4d\xce\x04\xa6\x57\xc1\xea\x99\xc5\x21\x4e\x02\x57\x0f\x0f\xd1\xb7\x48\x1b\xa5\xef\x76\xbb\x25\xbc\xe5\xf4\x75\x97\xc1\xff\xb1\x2e\x47\x4a\x62\x4f\xe2\xa8\x05\x97\x77\x50\x6b\x2c\xd3\xc0\xca\x6c\x96\x71\x9c\x17\xf2\xd6\x44\xb9\x50\x5d\x51\x0a\xa6\x31\xca\x55\x13\xb3\x5b\x76\x1f\x0b\x9e\x99\x98\x36\x9c\x08\x75\x98\x29\x45\x86\x34\x6b\xe3\xeb\xe8\x3a\xfa\x2c\xce\x8d\x89\xc7\xbd\xa8\xe1\x32\xca\x8d\x09\x40\xa3\x48\x03\x43\x5b\x81\xa6\x46\xa4\x00\xe2\xd5\x7f\xc7\xb7\x54\x92\x42\xb6\x41\xa3\x1a\x8c\x5f\x46\x9f\x45\x97\x8e\xe5\x74\xfb\xfd\x5c\x2d\x5b\x93\x6b\xde\x12\x18\x9d\x7f\x30\xdf\xdb\xdf\x3b\xd4\xdb\xf8\x3a\xba\x8a\xae\xfa\x85\xe3\x73\x6b\x82\x55\x12\x7b\xc0\xd5\x47\x61\x87\x52\xd1\x36\x7e\x11\xbd\x8c\xae\xe2\x96\xe5\x77\xac\xc2\x62\xe0\x64\x8f\xa2\x61\xf3\x6f\xe3\xfb\x94\x0f\x6f\x8f\x5d\xf8\x77\x30\x6b\x54\x83\x92\xa2\x5b\x13\xbf\x88\xae\x3e\x8f\x2e\x87\x8d\xc7\xf8\x8e\x81\x75\x9a\x65\x35\x8b\xd6\xa8\x89\xe7\x4c\x84\x39\x4a\x42\x0d\x0f\x76\x77\xd6\x70\x19\xd6\xc8\xab\x9a\x96\x70\x75\x79\xf9\xc9\xcd\xa9\xdd\x75\xed\xb7\x0b\x6e\x5a\xc1\xb6\x4b\x28\x05\xde\xfb\x2d\x26\x78\x25\x43\x4e\xd8\x98\x25\x78\x64\x77\xb0\x73\x3c\x5b\xad\x2a\x8d\xc6\xf4\xcc\x5a\x65\x38\x71\x25\x97\x36\xa2\x18\xf1\x35\x9e\xa2\x35\x2d\x93\x8f\x2e\xb0\xcc\x28\xd1\x11\x1e\x09\x92\x09\x95\xdf\xf9\x3d\xf7\x8c\xa7\x4a\xe4\x4a\x28\xbd\x84\x4d\xcd\xfb\x6b\xe0\x18\x41\xab\xb1\x87\x87\x96\x15\x05\x97\xd5\x12\x5e\xb5\xbd\x3e\xd0\x30\x5d\x71\xb9\x84\xcb\xfd\x95\x24\x1e\xcc\x98\xc4\x3e\x63\x3d\x9b\x25\x99\x2a\xb6\xce\x87\x05\x5f\x43\x2e\x98\x31\x69\x70\x64\x62\x97\x89\x0e\x08\x6c\x02\x62\x5c\x0e\x47\x07\x67\x5a\x6d\x02\x70\x8c\xd2\xc0\x0b\x11\x66\x8a\x48\x35\x4b\xb8\xb2\xe2\xf5\x57\x8e\xf0\x44\x28\xaa\xf0\xea\xc5\x70\x38\x4b\xea\xab\x01\x84\xf0\x9e\x42\xe7\x9f\xd1\x33\xc1\x2a\xe1\xc3\xdd\x92\x41\xc9\xc2\x8c\x51\x1d\x00\xd3\x9c\x85\x35\x2f\x0a\x94\x69\x40\xba\x43\x1b\x47\x7c\x05\xd3\xbc\x37\xa4\xbd\xd7\x1d\xd5\x28\xad\x9e\x84\x45\x9f\x04\xe1\x18\xb6\xe2\x54\x77\x59\xc8\x04\x3d\x09\x9e\xc4\xf5\xd5\xa0\x52\x5c\xf0\x75\x6f\x91\xc9\xe7\x91\x71\x9e\xd6\xff\x73\xe8\x3f\x54\x59\x1a\xa4\x70\x62\x8e\x09\x31\x97\x6d\x47\x61\xa5\x55\xd7\x8e\xe7\xb3\xc4\xed\x02\x2f\xd2\xa0\xe2\x86\x02\xa0\x6d\xdb\xdb\x2e\x18\x55\x52\xba\x09\xad\xeb\xb4\x12\x01\xb4\x82\xe5\x58\x2b\x51\xa0\x4e\x83\xde\x26\x6f\xb9\x21\xf8\xe9\x87\x7f\x40\xef\x60\x2e\x2b\xd8\xaa\x4e\xc3\x1b\xaa\x51\x63\xd7\x00\x2b\x0a\x1b\xdc\x51\x14\x4d\x78\xbb\x48\x7f\x2c\x5d\x98\x91\xdc\x53\xcd\x92\xac\x23\x52\x23\x61\x46\x12\x32\x92\x61\x81\x25\xeb\xc4\x28\xb1\x27\x0a\x40\xc9\x5c\xf0\xfc\x2e\x0d\x1e\x1e\x78\x09\xd1\x0f\x98\xb3\x96\xf2\x9a\xed\x76\x95\x1e\xbe\x23\xbc\xc7\xbc\x23\x9c\x2f\x1e\x1e\x50\x18\xdc\xed\x4c\x97\x35\x9c\xdc\x5a\x16\xbb\x5d\xb0\x7a\xcb\xd7\x08\x0d\x7a\x05\x9e\x27\xb1\x87\xdf\x8b\x1e\x5b\xd9\x47\x2b\x3b\xa7\x3d\x62\x78\xc2\x07\x55\x38\x0a\x11\x40\xc1\x88\x85\x86\x13\xde\xe1\xd6\xca\x3b\xbd\xdb\x9f\xe6\x4c\x88\x8c\x59\x75\xbc\x84\xe3\xa5\x3f\xd0\x9a\x6c\xcd\x8d\x6b\x02\x56\x83\x04\x4e\xfa\xbf\x12\x54\x47\x2f\x8e\x54\xbb\x84\xeb\x17\x93\xe7\x76\x2a\xde\x5e\x1d\xc5\xdb\xf5\x49\xe2\x96\x49\x14\xe0\xfe\x86\xa6\x61\x62\xf8\x1e\x1c\xb7\x37\xe6\xf1\xa5\xd0\x26\x97\x51\xb4\x31\x49\x5d\xde\x80\x5a\xa3\x2e\x85\xda\x2c\x81\x75\xa4\x6e\xa0\x61\xf7\x63\xa2\xbe\xbe\xbc\x9c\xca\x6d\x9b\x17\x96\x09\x74\xb1\xad\xf1\xf7\x0e\x0d\x99\x31\xa6\xfd\x91\xfb\x6b\x43\xbb\x40\x69\xb0\x38\xb2\x86\xe5\x68\x4d\xeb\xa8\x26\xae\x1f\x8d\x79\x52\xf6\x52\xa9\x31\xf7\x4d\xc5\xe8\xa1\x27\x69\x3a\x58\x25\xa4\xf7\x74\xb3\x84\x8a\xbf\x94\xbb\xb4\xed\x4d\x9e\x4a\x5d\xfe\x71\x59\xdd\x5b\x44\xed\x0b\xa3\x0d\x59\x70\xcb\x24\xa6\xe2\x23\x38\xdb\x20\xcc\x98\xc1\x0f\x61\xef\x4a\xd4\x9e\xbd\x5b\x7e\x2c\xff\x1a\x99\xa6\x0c\xd9\xd3\xd9\x75\x22\x40\xd9\xc9\x62\xa2\xbf\x7b\xd1\x1f\x2b\x40\x27\xf9\x1a\xb5\xe1\xb4\xfd\x50\x09\xb0\xd8\x8b\xe0\xd7\x87\x22\x24\x31\xe9\xf7\xc7\xda\x74\xf1\x37\x3d\xee\x3f\xab\xa5\xd7\xab\xaf\xd5\x06\x0a\x85\x06\xa8\xe6\x06\x6c\x25\xfc\x22\x89\xeb\xeb\x91\xa4\x5d\xbd\xb3\x07\xce\xa8\x50\xfa\x62\xc8\x0d\xe8\x4e\xba\x22\xa0\x24\x50\x8d\x87\x75\x54\xfa\xaf\x08\xde\x29\xdb\x8b\xac\x51\x12\x34\x4c\xf0\x9c\xab\xce\x00\xcb\x49\x69\x03\xa5\x56\x0d\xe0\x7d\xcd\x3a\x43\x16\xc8\xa6\x0f\xb6\x66\x5c\xb8\xb7\xe4\x5c\x0a\x4a\x03\xcb\xf3\xae\xe9\x6c\x2f\x25\x2b\x40\xa9\xba\xaa\xee\x65\x21\x05\x8d\xea\x24\x81\x50\xb2\x1a\xe5\x31\x2d\x6b\x80\x11\xb1\xfc\xce\x5c\xc0\x90\x15\x80\x69\x04\xe2\x58\xd8\x5b\x7d\x49\x63\x79\x6e\xaf\x9b\x08\x5e\xcb\xad\x92\x08\x35\x5b\x3b\x41\x8e\x08\xa0\x61\xdb\x01\xa8\x97\x6b\xc3\xa9\xe6\x5e\xf1\x16\x75\x63\x9b\xe3\x02\x04\x6f\x38\x81\x2a\x21\x31\xa4\x95\xac\xec\x4c\xf5\xda\x49\xb8\xdb\x79\x91\xe7\x66\x01\xb1\x35\xd5\xf7\xa8\xb9\x2a\x76\x3b\xdb\x77\x39\xd2\x28\x89\xdb\xa9\xc5\xd5\x21\xc3\x0b\x30\xbc\x69\xc5\x16\x72\x8d\x8c\x10\x18\x24\xec\x68\x1a\xb2\xb5\x3d\xf2\x4d\x89\xeb\xa7\x03\x20\xa6\x2b\x3b\x6b\xfe\x9b\x65\xaa\xa3\x65\x26\x98\xbc\xb3\x65\x6f\xac\xe7\x49\xcc\x56\x4e\x95\xd3\x95\x1c\x5a\x66\xac\x5e\x5c\x92\x72\xaa\xf6\xc3\xa5\x81\xb9\x5d\x95\x5c\xa0\x9b\x3f\x5d\xf4\xc8\x33\x6b\x27\x3b\x24\x2c\x2e\x20\x57\xed\xd6\xdf\x76\xf7\xac\x68\xc6\x35\x0f\x23\x14\xcb\xd4\x1a\xc1\x77\x26\x99\xba\x07\x26\x0b\x28\xb9\x46\x60\x1b\xb6\x7d\x0e\x3f\xab\x0e\x72\x26\x81\x34\xcb\xef\x3c\xef\x4e\x6b\x1b\x46\x2d\x4a\x5b\x2a\xf6\x8e\xcd\x50\xa8\x8d\x23\xf1\x68\x25\x47\xe1\xbc\x6c\x10\xa1\x56\x1b\x68\xba\xdc\x29\x68\xdd\x8b\xf6\x60\xc3\x38\x41\x27\x89\x0b\xaf\x37\x75\x5a\x42\xae\x1a\x34\x13\x2f\x9c\x7c\x7e\xe3\x57\xff\xb1\x1f\x70\xdc\x71\x1c\xc3\x5b\xa1\x32\x26\x60\x6d\x33\x46\x26\xec\xa3\x52\x60\x3b\xa9\x03\x1d\x0c\x31\xea\x8c\x8d\x14\x67\x47\xf7\xa4\xec\xfd\x35\xd3\x36\x72\xb1\x69\x09\xd2\xbe\x3d\xb7\x7b\x06\xf5\xda\x0e\x1d\x3d\x8f\xaf\xb0\xe4\xd2\x5b\xb6\xec\x64\x6e\xa7\x07\xa0\x9a\x11\xf8\x06\xc2\x00\x73\x16\x87\x4e\x0b\xe8\xcd\xed\x11\x46\x3c\x47\x07\xe9\x78\x7d\xfe\xa8\xb1\xe9\x3f\xfa\x76\x63\xd1\x4f\x13\x1e\x26\x32\x28\x8b\xf9\xff\xff\xf8\xdd\xb7\x91\x21\xcd\x65\xc5\xcb\xed\xfc\xa1\xd3\x62\x09\xff\x3b\x0f\xfe\xc7\x35\x99\x8b\x5f\x2e\x7f\x8b\xd6\x4c\x74\xf8\x08\xfa\x02\xfa\xcf\x25\x1c\x72\xd9\x2d\x16\x37\xa7\x3b\xac\x49\x5f\xa7\xd1\x20\xcd\x2d\xe1\xd8\x08\xed\x6e\x0e\x0d\xc3\xa0\x41\xaa\x95\x0b\x02\x8d\xb9\x92\x12\x73\x82\xae\x55\xb2\xb7\x03\x08\x65\xcc\x60\x8c\x3d\xc5\xc4\x1e\x83\xc2\xbc\x84\xf9\xe0\x91\x4f\xe0\x05\xa4\x29\x5c\x0e\x67\xbd\x35\x20\x05\x89\x1b\xf8\x27\x66\x3f\xaa\xfc\x0e\x69\x1e\x6c\x8c\x7d\x8f\x01\x9c\x83\x50\x39\xb3\x78\x51\xad\x0c\xc1\x39\x04\x31\x6b\x79\xb0\xf0\x73\xd8\x0e\x6c\x63\xfa\xe7\x60\x1f\x84\xe5\x27\x55\x2f\xe9\xf9\xb9\x0f\x95\xc1\x5d\x4a\x36\x68\x0c\xab\x70\xaa\xa1\x4b\xca\xa3\x2a\xd6\x10\x8d\xa9\x20\x05\xe7\xd6\x96\x69\x83\x9e\x24\xb2\x8d\x40\xcf\xc5\x99\xc3\x91\xa5\x29\xc8\x4e\x88\xf1\xfe\x4c\xa3\x7d\x45\x3d\xd9\xee\xd9\x01\x79\xe4\x73\xe6\xf3\x34\x05\x5b\x15\xad\x8f\x8a\xfd\x4d\x1b\x32\xbe\x7e\x2f\x22\x5b\x98\xf7\x37\x16\x23\xdc\x23\x34\x2c\xfe\x0c\x0e\x8b\x63\x3c\x2c\x9e\x00\x74\xed\xd2\xfb\xf0\x7c\x7b\x35\x81\x73\x1b\x4f\xa0\xc9\xae\xc9\x50\xbf\x0f\xce\xb7\x4b\x3d\x9c\x33\xf5\x37\x92\x26\x77\x2f\xe0\xea\xd5\xe2\x09\x74\xd4\x5a\x3d\x09\x2e\x15\x6d\xe7\x0f\x82\x6d\x6d\xba\x87\x33\x52\xed\x97\xae\xbb\x39\xbb\x00\xcb\x6b\x09\x23\xc2\x85\x1b\xa9\x96\x70\xe6\x56\x67\xbb\x27\xb8\x99\x2e\xcf\x6d\x21\xf8\x18\x7e\x3d\xc6\xc8\xb1\x5f\x3f\xc9\x73\x4c\xec\x07\x4c\xe1\xd3\x4f\xe1\xd1\xe9\x61\x08\xda\x18\xee\x2b\x14\xa4\x10\x04\x3d\xfc\xac\x54\x1a\xe6\xf6\x90\xa7\x97\x37\xc0\x93\x29\x4c\x24\x50\x56\x54\xdf\x00\x3f\x3f\xdf\x23\xcd\x06\x98\xf3\x14\x02\xdb\xc0\x27\x54\xac\x5c\x23\xe5\xbb\xad\x5f\x03\x3b\xb0\xd9\x41\x56\x16\x4b\x9b\x66\xe7\x67\xfb\x2a\x3c\x29\xc0\xe7\x07\x22\xff\xc2\x7f\x8b\x3a\x83\xda\x95\xcc\x73\x08\xa2\x56\x56\x5f\xb8\x31\xef\xd5\xcb\xb3\xc5\x0d\xec\x31\xdd\xf0\xb7\x84\xdc\x8e\x42\x37\xe0\xc7\x09\xd7\xd4\xc1\x38\x08\xb9\x55\xa6\x74\x81\x3a\xd4\xac\xe0\x9d\x59\xc2\xcb\xf6\xfe\xe6\xd7\x61\x50\x74\xad\xa7\x93\xbb\xd5\xb8\x3a\x25\xcb\xd0\xdd\x9c\x43\x90\xc4\x96\x68\xb8\x32\x6a\x39\xfd\xbd\x09\x4e\x34\xcd\x30\xfe\x1a\xd4\xef\x37\xbc\x28\x04\x5a\x21\x1c\x43\xff\xb3\x5d\xd1\x69\x97\xb8\xe6\x7e\x3d\x3f\x96\x83\x78\x83\x8b\xa8\x93\xfc\x7e\xbe\x08\x7b\x9a\x61\x7d\x01\x67\xc6\xe6\xe7\xc2\x9c\x2d\xa2\xba\x6b\x98\xe4\x7f\xe0\xdc\x76\xe0\x0b\x2f\xb7\x95\xd8\xb6\xd5\xa3\xb7\x77\x93\x87\x36\x8e\x84\x8b\xa8\xa6\x46\xcc\x83\x84\xdc\x6f\x5a\x56\xb8\xd1\xc5\x0e\xc5\x6f\x1f\x46\xe4\xee\x30\x87\xe6\x42\x19\x3c\xaa\x11\x60\x90\xde\xf1\x06\x55\x47\xf3\xb1\x8e\x5c\xd8\x31\xf5\x72\x71\x03\xbe\x2e\xcd\xe2\x78\xc4\xf0\xaf\xf7\xaf\x63\xec\xfa\x02\xf7\xc6\xd8\xe1\x81\x9b\x1a\x18\x6c\x30\x33\xae\x46\x40\x7f\xc7\xb5\x01\xbe\xdc\xbf\xfe\xfe\x9b\x49\xc9\x1f\x51\xe7\x4e\xc1\xf1\xe7\xd3\x53\xb5\xf6\xe4\xef\xb5\x9b\xcd\x26\xaa\x94\xaa\x84\xff\xa5\x76\x2c\xc6\xb6\x02\x45\xb7\x76\x42\x35\x5b\x99\x43\x81\x25\xea\xd5\x04\xbe\xaf\xd0\x49\xec\x7f\x49\x4c\x62\xff\xbf\x24\xff\x09\x00\x00\xff\xff\x93\x31\x5b\xa3\x36\x19\x00\x00")

func faucetHtmlBytes() ([]byte, error) {
	return bindataRead(
		_faucetHtml,
		"faucet.html",
	)
}

func faucetHtml() (*asset, error) {
	bytes, err := faucetHtmlBytes()
	if err != nil {
		return nil, err
	}

	info := bindataFileInfo{name: "faucet.html", size: 0, mode: os.FileMode(0), modTime: time.Unix(0, 0)}
	a := &asset{bytes: bytes, info: info}
	return a, nil
}

// Asset loads and returns the asset for the given name.
// It returns an error if the asset could not be found or
// could not be loaded.
func Asset(name string) ([]byte, error) {
	cannonicalName := strings.Replace(name, "\\", "/", -1)
	if f, ok := _bindata[cannonicalName]; ok {
		a, err := f()
		if err != nil {
			return nil, fmt.Errorf("Asset %s can't read by error: %v", name, err)
		}
		return a.bytes, nil
	}
	return nil, fmt.Errorf("Asset %s not found", name)
}

// MustAsset is like Asset but panics when Asset would return an error.
// It simplifies safe initialization of global variables.
func MustAsset(name string) []byte {
	a, err := Asset(name)
	if err != nil {
		panic("asset: Asset(" + name + "): " + err.Error())
	}

	return a
}

// AssetInfo loads and returns the asset info for the given name.
// It returns an error if the asset could not be found or
// could not be loaded.
func AssetInfo(name string) (os.FileInfo, error) {
	cannonicalName := strings.Replace(name, "\\", "/", -1)
	if f, ok := _bindata[cannonicalName]; ok {
		a, err := f()
		if err != nil {
			return nil, fmt.Errorf("AssetInfo %s can't read by error: %v", name, err)
		}
		return a.info, nil
	}
	return nil, fmt.Errorf("AssetInfo %s not found", name)
}

// AssetNames returns the names of the assets.
func AssetNames() []string {
	names := make([]string, 0, len(_bindata))
	for name := range _bindata {
		names = append(names, name)
	}
	return names
}

// _bindata is a table, holding each asset generator, mapped to its name.
var _bindata = map[string]func() (*asset, error){
	"faucet.html": faucetHtml,
}

// AssetDir returns the file names below a certain
// directory embedded in the file by go-bindata.
// For example if you run go-bindata on data/... and data contains the
// following hierarchy:
//     data/
//       foo.txt
//       img/
//         a.png
//         b.png
// then AssetDir("data") would return []string{"foo.txt", "img"}
// AssetDir("data/img") would return []string{"a.png", "b.png"}
// AssetDir("foo.txt") and AssetDir("notexist") would return an error
// AssetDir("") will return []string{"data"}.
func AssetDir(name string) ([]string, error) {
	node := _bintree
	if len(name) != 0 {
		cannonicalName := strings.Replace(name, "\\", "/", -1)
		pathList := strings.Split(cannonicalName, "/")
		for _, p := range pathList {
			node = node.Children[p]
			if node == nil {
				return nil, fmt.Errorf("Asset %s not found", name)
			}
		}
	}
	if node.Func != nil {
		return nil, fmt.Errorf("Asset %s not found", name)
	}
	rv := make([]string, 0, len(node.Children))
	for childName := range node.Children {
		rv = append(rv, childName)
	}
	return rv, nil
}

type bintree struct {
	Func     func() (*asset, error)
	Children map[string]*bintree
}
var _bintree = &bintree{nil, map[string]*bintree{
	"faucet.html": &bintree{faucetHtml, map[string]*bintree{}},
}}

// RestoreAsset restores an asset under the given directory
func RestoreAsset(dir, name string) error {
	data, err := Asset(name)
	if err != nil {
		return err
	}
	info, err := AssetInfo(name)
	if err != nil {
		return err
	}
	err = os.MkdirAll(_filePath(dir, filepath.Dir(name)), os.FileMode(0755))
	if err != nil {
		return err
	}
	err = ioutil.WriteFile(_filePath(dir, name), data, info.Mode())
	if err != nil {
		return err
	}
	err = os.Chtimes(_filePath(dir, name), info.ModTime(), info.ModTime())
	if err != nil {
		return err
	}
	return nil
}

// RestoreAssets restores an asset under the given directory recursively
func RestoreAssets(dir, name string) error {
	children, err := AssetDir(name)
	// File
	if err != nil {
		return RestoreAsset(dir, name)
	}
	// Dir
	for _, child := range children {
		err = RestoreAssets(dir, filepath.Join(name, child))
		if err != nil {
			return err
		}
	}
	return nil
}

func _filePath(dir, name string) string {
	cannonicalName := strings.Replace(name, "\\", "/", -1)
	return filepath.Join(append([]string{dir}, strings.Split(cannonicalName, "/")...)...)
}

