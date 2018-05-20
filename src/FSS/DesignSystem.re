module type Design_system = {type font_faces; type text_sizes; type colors;};

module Default_system: Design_system = {
  type font_faces =
    | Circular
    | Helvetica;
  type text_sizes =
    | Title
    | Subtitle
    | Header
    | Subheader
    | Paragraph;
  type colors =
    | Primary
    | PrimaryVariant
    | Secondary
    | SecondaryVariant;
};
