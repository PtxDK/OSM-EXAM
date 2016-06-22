STUDENT=brandt_patrick
VERSION=0.1

TAR_GZ=$(STUDENT)-osm16-exam-v$(VERSION).tar.gz

all: $(TAR_GZ)

$(TAR_GZ):
	make -C kudos/kudos/ clean
	make -C kudos/userland/ clean
	tar cvzf $(TAR_GZ) --transform 's,^,src/,' \
	  kudos/kudos/ \
	  kudos/userland/ \
	  kudos/yams.conf

clean:
	rm -rf $(TAR_GZ)

.PHONY: all clean
