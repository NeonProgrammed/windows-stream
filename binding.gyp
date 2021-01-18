{
  "targets": [
    {
      "target_name": "window-stream",
      "sources": [ "window-stream-c/pch.cpp" ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}