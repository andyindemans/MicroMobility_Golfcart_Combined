#!/bin/bash

sudo kill -9 $(docker inspect -f '{{.State.Pid}}' micromobility_bridgecontainer)
