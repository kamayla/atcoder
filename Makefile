up:
	docker compose up -d
down:
	docker compose down
ssh:
	docker container exec -it atcode /bin/bash