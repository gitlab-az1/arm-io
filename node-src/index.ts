'use strict';



try {
  /* eslint-disable @typescript-eslint/no-var-requires */
  module.exports = require('node-gyp-build')(__dirname);
  // eslint-disable-next-line no-empty
} catch (err: any) {
  console.warn(err.message);
  module.exports = require('./fallback');
}
