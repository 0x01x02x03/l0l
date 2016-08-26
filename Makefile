CC = g++
CFLAGS= -g -Wall
TARGET = l0l

$(TARGET): $(TARGET).cpp
	$(CC) -o $(TARGET) $(TARGET).cpp

#linux only
clean:
	rm $(TARGET)

install:
	mkdir -p $(DESTDIR)/usr/share/$(TARGET)
	cp -a core __init__.py $(TARGET) $(DESTDIR)/usr/share/$(TARGET)
	mkdir -p $(DESTDIR)/usr/bin/
	cp l0l.sh $(DESTDIR)/usr/bin/$(TARGET)

uninstall:
	rm -rf $(DESTDIR)/usr/share/$(TARGET) $(DESTDIR)/usr/bin/$(TARGET)
