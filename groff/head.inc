.NHR
.HX 0

\" Here we define some basic macros for HTML formatting

.de STRONG
.HTML <strong>\\$1</strong> \\$2
..

.de EM
.HTML <em>\\$1</em> \\$2
..

.de MONO
.HTML <span class="mono">\\$1</span> \\$2
..

.de FOOTREF
.HTML <sup class="footnote">
.HTML <span id="fn\\$1r"></span>
.HTML <a href="#fn\\$1">\\$1</a>
.HTML </sup> \\$2
..

.de FOOTNOTE
.HTML <span id="fn\\$1"></span>
.HTML <small class="footnote"><strong>Footnote \\$1.</strong>
..

.de FOOTEND
.HTML Return to <a href="#fn\\$1r">article</a>.</small>
..

.de ARTICLE
.HTML <article>
..

.de ARTICLE_END
.HTML </article>
..

\" Pagination info (for non-html outputs)

.po 2
.ll 70

.ad b
.in 0

\" Page headers

.HEAD "<meta content=""text/html; charset=UTF-8"" http-equiv=""content-type"">"
.HEAD "<link type=""text/css"" rel=""stylesheet"" href=""css/main.css""></link>"

