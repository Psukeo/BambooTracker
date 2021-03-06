#include "replace_instrument_in_pattern_qt_command.hpp"

ReplaceInstrumentInPatternQtCommand::ReplaceInstrumentInPatternQtCommand(PatternEditorPanel* panel, QUndoCommand* parent)
	: QUndoCommand(parent),
	  panel_(panel)
{
}

void ReplaceInstrumentInPatternQtCommand::redo()
{
	panel_->update();
}

void ReplaceInstrumentInPatternQtCommand::undo()
{
	panel_->update();
}

int ReplaceInstrumentInPatternQtCommand::id() const
{
	return 0x39;
}
