let rawComponent = ReasonReact.statelessComponent("Playground");

let make = () => {
  ...rawComponent,
  render: _self => {
    ReactDOMRe.createElement("div", [| ReasonReact.string("hello!") |])
  }
};
