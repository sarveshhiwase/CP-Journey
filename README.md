## Competitive Programming Basics and Practice

- My CP Journey

## Command For deleting compiled files

```
find -type f -executable -delete
```
```
find . -type f \( -name "*output.txt" -o -name "error.txt" -o -name "input.txt" \) -exec rm -rf {} +
```

```
find -type d -name ".cph" -exec rm -rf {} +
```

- Only works for Linux

## Download link to download yt playlsit
 
- yt-dlp -o "%(playlist)s/%(playlist_index)s - %(title)s.%(ext)s" "https://www.youtube.com/playlist?list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk"

