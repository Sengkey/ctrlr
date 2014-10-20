/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_3D1464627E358A00__
#define __JUCE_HEADER_3D1464627E358A00__

//[Headers]     -- You can add your own extra header files here --
#include "CtrlrWindowManagers/CtrlrChildWindowContent.h"
#include "CtrlrWindowManagers/CtrlrPanelWindowManager.h"
#include "CtrlrLog.h"

class CtrlrPanel;
class CtrlrLuaDebugger;
//[/Headers]

#include "CtrlrLuaDebuggerUITopContainer.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class CtrlrLuaDebuggerUI  : public CtrlrChildWindowContent
{
public:
    //==============================================================================
    CtrlrLuaDebuggerUI (CtrlrPanel &_owner);
    ~CtrlrLuaDebuggerUI();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    uint8 getType()							{ return (CtrlrPanelWindowManager::LuaDebugger); }
	String getContentName()					{ return ("LUA Debugger"); }
	int waitForCommand();
	void setOutputFromDebugger(const String &output);
	String getLastCommand();
	void setCommand(const String command);
	void setDebuggerJsonOutput (const String &jsonEncodedData);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    CtrlrPanel &owner;
    CtrlrLuaDebugger *debugger;
    StretchableLayoutManager layout;
    String lastCommand;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextEditor> debuggerState;
    ScopedPointer<StretchableLayoutResizerBar> stretcher;
    ScopedPointer<CtrlrLuaDebuggerUITopContainer> topContainer;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CtrlrLuaDebuggerUI)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_3D1464627E358A00__
