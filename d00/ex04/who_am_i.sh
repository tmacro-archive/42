#!/bin/sh

ldapwhoami 2>&1 | grep '^d' | sed s/dn://
