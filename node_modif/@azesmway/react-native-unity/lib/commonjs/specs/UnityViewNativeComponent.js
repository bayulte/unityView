"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports.default = exports.Commands = void 0;
var _codegenNativeComponent = _interopRequireDefault(require("react-native/Libraries/Utilities/codegenNativeComponent"));
var _codegenNativeCommands = _interopRequireDefault(require("react-native/Libraries/Utilities/codegenNativeCommands"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }
const Commands = exports.Commands = (0, _codegenNativeCommands.default)({
  supportedCommands: ['postMessage', 'unloadUnity', 'pauseUnity', 'resumeUnity', 'windowFocusChanged']
});
var _default = exports.default = (0, _codegenNativeComponent.default)('RNUnityView');
//# sourceMappingURL=UnityViewNativeComponent.js.map