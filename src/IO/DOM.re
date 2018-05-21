/* this should typecheck for a component */
let render = (~domId : string, comp : ReasonReact.component) =>
  comp()
    |> ReasonReact.element
    |> e => ReactDOMRe.renderToElementWithId(e, domId);
