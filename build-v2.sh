mkdir -p out-v2
pdflatex -halt-on-error -output-directory=out-v2 slides-v2/main.tex && \
    pdflatex -halt-on-error -output-directory=out-v2 slides-v2/main.tex
