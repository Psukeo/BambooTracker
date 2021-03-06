#include "paste_mix_copied_data_to_pattern_qt_command.hpp"

PasteMixCopiedDataToPatternQtCommand::PasteMixCopiedDataToPatternQtCommand(PatternEditorPanel* panel, QUndoCommand* parent)
	: QUndoCommand(parent),
	  panel_(panel)
{
}

void PasteMixCopiedDataToPatternQtCommand::redo()
{
	panel_->update();
}

void PasteMixCopiedDataToPatternQtCommand::undo()
{
	panel_->update();
}

int PasteMixCopiedDataToPatternQtCommand::id() const
{
	return 0x2f;
}
