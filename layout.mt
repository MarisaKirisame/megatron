prop width;
prop height;
proc main() {
    self.pass0()
}
proc pass0() {
    self.width <- if has_parent() then parent().width else 800;
    children.pass0();
    heights = sum(children.height);
    self.height <- if len(children) > 0 then heights else 10;
}
