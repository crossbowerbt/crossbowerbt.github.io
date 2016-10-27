GROFF=groff
GROFF_OPS=-P-l -Thtml -mwww

all: example.html

%.html : %.txt
	$(GROFF) $(GROFF_OPS) > $@ $<
	
	# fix some code that groff automatically generates
	
	sed -i -r '/<!-- Creat/d' $@
	
	sed -i -r 's/<!DOCTYPE html .+/<!DOCTYPE html>/g' $@
	sed -i -r '/loose.dtd/d' $@
	
	sed -i -r '/name="generator"/d' $@
	sed -i -r '/charset=US-ASCII/d' $@
	
	sed -i -r '/<meta name="Content-Style"/d' $@
	
	sed -i -r '/<style/d' $@
	sed -i -r '/\s+(p|pre|table|h1)\s+\{/d' $@
	sed -i -r '/<\/style/d' $@
	
	sed -i -r 's/ style="margin-top: 1em"//g' $@
	
	sed -i -r 's!<p><article></p>!<article>!g' $@
	sed -i -r 's!<p></article></p>!</article>!g' $@

clean:
	rm *.html

