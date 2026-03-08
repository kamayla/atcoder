.PHONY: new

new:
	@if [ -z "$(name)" ]; then echo "Usage: make new name=problem-name"; exit 1; fi
	@mkdir -p $(name)
	@echo '#include <bits/stdc++.h>\n\nusing namespace std;\n\nint main() {\n\n}' > $(name)/main.cpp
	@touch $(name)/d.txt
	@echo "Created $(name)/"
