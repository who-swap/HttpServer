# HTTP Server (C++)

A project where I'm learning how web servers work by building one from scratch in modern C++.

The goal is to understand networking, HTTP, and low-level system programming instead of relying on existing frameworks. This repository will gradually evolve from a simple TCP server into a fully fledged HTTP server built using the TCP/IP stack.

---

## Current Goals

- Learn socket programming
- Understand the TCP/IP networking model
- Accept client connections
- Parse HTTP requests
- Generate HTTP responses
- Serve static files
- Build everything step by step

---

## Roadmap

### Phase 1 - TCP Server
- [x] Create TCP socket
- [x] Bind to a port
- [x] Listen for connections
- [x] Accept clients
- [ ] Handle multiple clients

### Phase 2 - HTTP Basics
- [ ] Parse HTTP request line
- [ ] Parse request headers
- [ ] Support GET requests
- [ ] Return valid HTTP responses
- [ ] Handle common status codes

### Phase 3 - Static File Server
- [ ] Serve HTML files
- [ ] Serve CSS
- [ ] Serve JavaScript
- [ ] Serve images
- [ ] MIME type detection

### Phase 4 - Better Architecture
- [ ] Request parser
- [ ] Response builder
- [ ] Routing
- [ ] Logging
- [ ] Configuration system

### Phase 5 - Performance
- [ ] Multithreading
- [ ] Thread pool
- [ ] Non-blocking sockets
- [ ] Keep-Alive connections
- [ ] Efficient file serving

### Phase 6 - Future Features
- [ ] POST requests
- [ ] File uploads
- [ ] Chunked transfer encoding
- [ ] Compression (gzip)
- [ ] CGI/FastCGI support
- [ ] HTTPS using OpenSSL
- [ ] Virtual hosts
- [ ] Reverse proxy support

---

## Why this project?

I'm building this project to better understand:

- TCP/IP networking
- Socket programming
- The HTTP protocol
- System programming in C++
- How real web servers like Nginx and Apache work internally

Instead of treating networking as a black box, I want to understand every layer involved in serving a web page.

---

## Technologies

- C++
- POSIX Sockets
- TCP/IP
- Linux

---

## Learning Resources

- Beej's Guide to Network Programming
- RFC 9110 (HTTP Semantics)
- RFC 9112 (HTTP/1.1)
- Linux `man` pages (`socket`, `bind`, `listen`, `accept`, `recv`, `send`)

---

## Project Status

🚧 Work in Progress

This repository is part of my learning journey. New features will be added incrementally as I learn more about networking and HTTP internals.

---

## License

This project is licensed under the MIT License.
