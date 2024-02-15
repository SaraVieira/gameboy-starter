# Starter to code Game Boy Games on a mac

Test game shows a sprite and moves it on the screen on button input

## Requirements

This readme assumes you will be using VSCode

1. Install Java:

```
brew install java
sudo ln -sfn /opt/homebrew/opt/openjdk/libexec/openjdk.jdk \
     /Library/Java/JavaVirtualMachines/openjdk.jdk
```

2. Install Emulicious Debugger

https://marketplace.visualstudio.com/items?itemName=emulicious.emulicious-debugger

## Sprites

Included here are Game Boy Tile Designer and Game Boy tile map and these require wine installed

```
brew tap homebrew/cask-versions
brew install --cask --no-quarantine wine-stable
```

### Good learning resources

- https://fkefjzwv.elementor.cloud/tutorial/getting-started/
- https://github.com/mrombout/gbdk_playground
- https://www.youtube.com/watch?v=eYT9s9bvKYU&t=1211s
- https://www.youtube.com/playlist?list=PLeEj4c2zF7PaFv5MPYhNAkBGrkx4iPGJo
- https://gbdk-2020.github.io/gbdk-2020/docs/api/docs_links_and_tools.html
- https://gbdev.io/resources.html#c
