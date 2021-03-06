void modeManager(int request) {
  switch (request) {
    // First Row
    case 1:
      setMode(request);
      solidColorMode();
      break;
    case 2:
      setMode(request);
      breatheMode();
      break;
    case 3:
      setMode(request);
      allOff();
      break;
    // Second Row
    case 4:
      setMode(request);
      rgbFadeMode();
      break;
    case 5:
      setMode(request);
      pinkTurquoiseBreatheMode();
      break;
    case 6:
      setMode(request);
      tvMode();
      break;
    // Third Row
    case 7:
      adjustColor('r', 'u');
      break;
    case 8:
      adjustColor('g', 'u');
      break;
    case 9:
      adjustColor('b', 'u');
      break;
    // Fourth Row
    case 10:
      adjustColor('r', 'd');
      break;
    case 11:
      adjustColor('g', 'd');
      break;
    case 12:
      adjustColor('b', 'd');
      break;
    // Shifted First Row
    case 13:
      setMode(request);
      solidWhiteMode();
      break;
    case 14:
      setMode(request);
      rgbBreatheMode();
      break;
    case 15:
      break;
    // Shifted Second Row
    case 16:
      setMode(request);
      sunriseMode(2, 5);
      break;
    case 17:
      setMode(request);
      sunsetMode(0, 5);
      break;
    case 18:
      setMode(request);
      danceMode();
      break;
    // Shifted Third Row
    case 19:
      adjustColor('r', 'x');
      break;
    case 20:
      adjustColor('g', 'x');
      break;
    case 21:
      adjustColor('b', 'x');
      break;
    // Shifted Fourth Row
    case 22:
      adjustColor('r', 'n');
      break;
    case 23:
      adjustColor('g', 'n');
      break;
    case 24:
      adjustColor('b', 'n');
      break;
    // Other Modes
    case 25:
      setMode(request);
      biasLightMode();
      break;
    case 26:
      setMode(request);
      solidBlueMode();
      break;
    case 27:
      setMode(request);
      nightVisionMode();
      break;
    case 101:
      setMode(request);
      solidColorMode();
      break;
    case 118:
      setMode(request);
      allMbDanceMode();
  }
}
