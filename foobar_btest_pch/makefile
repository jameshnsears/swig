HDR = foobar_btest.h

INCDIR = $(HOME)/bin/boost_1_62_0/include

DEBUGDIR = Debug
RELEASEDIR = Release

all: clean debug release

clean:
	@rm -f $(PCH)
	@rm -rf $(DEBUGDIR)
	@rm -rf $(RELEASEDIR)

debug:
	@mkdir $(DEBUGDIR)
	g++ -I$(INCDIR) -O0 -g3 $(HDR)
	@mv $(HDR).gch $(DEBUGDIR)

release:
	@mkdir $(RELEASEDIR)
	g++ -I$(INCDIR) -O3 $(HDR)
	@mv $(HDR).gch $(RELEASEDIR)

	