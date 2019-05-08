type cookie;

[@bs.module "react-native"] [@bs.scope "Systrace"]
external installReactHook: unit => unit = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external setEnabled: bool => unit = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external isEnabled: unit => bool = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external beginEvent: (~profileName: string=?, ~args: Js.t({..})=?, unit) => unit = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external endEvent: unit => unit = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external beginAsyncEvent: (~profileName: string=?, unit) => cookie = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external endAsyncEvent: (~profileName: string=?, ~cookie: cookie=?, unit) => unit = "";

[@bs.module "react-native"] [@bs.scope "Systrace"]
external counterEvent: (~profileName: string=?, ~value: Js.t({..})=?, unit) => unit = "";
