let render = (~domId : string, ~comp, ()) =>
  comp()
  |> ReasonReact.element
  |> e => ReactDOMRe.renderToElementWithId(e, domId);
