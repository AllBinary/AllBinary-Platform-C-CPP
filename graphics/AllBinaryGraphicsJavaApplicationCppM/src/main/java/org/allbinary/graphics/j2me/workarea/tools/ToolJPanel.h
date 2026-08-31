
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JButton.h"
#include "JList.h"
#include "GridLayout.h"
#include "Font.h"
#include "LinesGraphicItem.h"
#include "MouseAdapter.h"
#include "MouseEvent.h"
#include "ToolFactory.h"

class ToolJPanel: public javax.swing.JPanel {
        

public constructor ();

    initComponents();

    dottedFillRountRectJButtonMousePressed(java.awt.event.MouseEvent evt);

    dottedFillArcJButtonMousePressed(java.awt.event.MouseEvent evt);

    dottedFillRectJButtonMousePressed(java.awt.event.MouseEvent evt);

    dottedArcJButtonMousePressed(java.awt.event.MouseEvent evt);

    dottedRectButtonMousePressed(java.awt.event.MouseEvent evt);

    dottedLineJButtonMousePressed(java.awt.event.MouseEvent evt);

    fillRoundRectJButtonMousePressed(java.awt.event.MouseEvent evt);

    fillRectJButtonMousePressed(java.awt.event.MouseEvent evt);

    fillArcJButtonMousePressed(java.awt.event.MouseEvent evt);

    imageJButtonMousePressed(java.awt.event.MouseEvent evt);

    roundRectJButtonMousePressed(java.awt.event.MouseEvent evt);

    charJButtonMousePressed(java.awt.event.MouseEvent evt);

    stringJButtonMousePressed(java.awt.event.MouseEvent evt);

    arcJButtonMousePressed(java.awt.event.MouseEvent evt);

    rectJButtonMouseClicked(java.awt.event.MouseEvent evt);

    lineJButtonMouseClicked(java.awt.event.MouseEvent evt);

    private: arcJButton: javax.swing.JButton;

    private: charJButton: javax.swing.JButton;

    private: colorJList: javax.swing.JList;

    private: colorJPanel: javax.swing.JPanel;

    private: dottedArcJButton: javax.swing.JButton;

    private: dottedFillArcJButton: javax.swing.JButton;

    private: dottedFillRectJButton: javax.swing.JButton;

    private: dottedFillRountRectJButton: javax.swing.JButton;

    private: dottedLineJButton: javax.swing.JButton;

    private: dottedRectButton: javax.swing.JButton;

    private: fillArcJButton: javax.swing.JButton;

    private: fillRectJButton: javax.swing.JButton;

    private: fillRoundRectJButton: javax.swing.JButton;

    private: imageJButton: javax.swing.JButton;

    private: lineJButton: javax.swing.JButton;

    private: rectJButton: javax.swing.JButton;

    private: roundRectJButton: javax.swing.JButton;

    private: stringJButton: javax.swing.JButton;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_H
