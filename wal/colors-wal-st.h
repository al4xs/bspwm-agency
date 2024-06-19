const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1d1e", /* black   */
  [1] = "#f92672", /* red     */
  [2] = "#82b414", /* green   */
  [3] = "#fd971f", /* yellow  */
  [4] = "#4e82aa", /* blue    */
  [5] = "#8c54fe", /* magenta */
  [6] = "#465457", /* cyan    */
  [7] = "#ccccc6", /* white   */

  /* 8 bright colors */
  [8]  = "#505354",  /* black   */
  [9]  = "#f92672",  /* red     */
  [10] = "#82b414", /* green   */
  [11] = "#fd971f", /* yellow  */
  [12] = "#4e82aa", /* blue    */
  [13] = "#8c54fe", /* magenta */
  [14] = "#465457", /* cyan    */
  [15] = "#ccccc6", /* white   */

  /* special colors */
  [256] = "#010101", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ff5995",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
