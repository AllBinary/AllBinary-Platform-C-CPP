/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.graphics.j2me.workarea.tools

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/j2me/workarea/tools/JPanel.h"

typedef struct ToolJPanel ToolJPanel;
struct ToolJPanel {
    JPanel base;
    JButton* arcJButton;
    JButton* charJButton;
    JList* colorJList;
    JPanel* colorJPanel;
    JButton* dottedArcJButton;
    JButton* dottedFillArcJButton;
    JButton* dottedFillRectJButton;
    JButton* dottedFillRountRectJButton;
    JButton* dottedLineJButton;
    JButton* dottedRectButton;
    JButton* fillArcJButton;
    JButton* fillRectJButton;
    JButton* fillRoundRectJButton;
    JButton* imageJButton;
    JButton* lineJButton;
    JButton* rectJButton;
    JButton* roundRectJButton;
    JButton* stringJButton;
};


ToolJPanel* ToolJPanel_new(void);

void ToolJPanel_init(ToolJPanel* this);
static void ToolJPanel_initComponents(ToolJPanel* this);
static void ToolJPanel_dottedFillRountRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_dottedFillArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_dottedFillRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_dottedArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_dottedRectButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_dottedLineJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_fillRoundRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_fillRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_fillArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_imageJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_roundRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_charJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_stringJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_arcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_rectJButtonMouseClicked(ToolJPanel* this, MouseEvent* evt);
static void ToolJPanel_lineJButtonMouseClicked(ToolJPanel* this, MouseEvent* evt);

static void ToolJPanel_initFields(ToolJPanel* this) {
    this->arcJButton = nullptr;
    this->charJButton = nullptr;
    this->colorJList = nullptr;
    this->colorJPanel = nullptr;
    this->dottedArcJButton = nullptr;
    this->dottedFillArcJButton = nullptr;
    this->dottedFillRectJButton = nullptr;
    this->dottedFillRountRectJButton = nullptr;
    this->dottedLineJButton = nullptr;
    this->dottedRectButton = nullptr;
    this->fillArcJButton = nullptr;
    this->fillRectJButton = nullptr;
    this->fillRoundRectJButton = nullptr;
    this->imageJButton = nullptr;
    this->lineJButton = nullptr;
    this->rectJButton = nullptr;
    this->roundRectJButton = nullptr;
    this->stringJButton = nullptr;
}


void ToolJPanel_init(ToolJPanel* this) {
    JPanel_init(&this->base);
    ToolJPanel_initFields(this);
        ToolJPanel_initComponents(this);
}

ToolJPanel* ToolJPanel_new(void) {
    ToolJPanel* this = calloc(1, sizeof(ToolJPanel));
    ToolJPanel_init(this);
    return this;
}


static void ToolJPanel_initComponents(ToolJPanel* this) {
        this->lineJButton = JButton_new();
        this->rectJButton = JButton_new();
        this->arcJButton = JButton_new();
        this->stringJButton = JButton_new();
        this->charJButton = JButton_new();
        this->roundRectJButton = JButton_new();
        this->imageJButton = JButton_new();
        this->fillArcJButton = JButton_new();
        this->fillRectJButton = JButton_new();
        this->fillRoundRectJButton = JButton_new();
        this->dottedLineJButton = JButton_new();
        this->dottedRectButton = JButton_new();
        this->dottedArcJButton = JButton_new();
        this->dottedFillRectJButton = JButton_new();
        this->dottedFillArcJButton = JButton_new();
        this->dottedFillRountRectJButton = JButton_new();
        this->colorJPanel = JPanel_new();
        this->colorJList = JList_new();
        ToolJPanel_setLayout(this, GridLayout_new(17, 1));
        JButton_setFont(this->lineJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->lineJButton, LinesGraphicItem_getStaticName());
        JButton_addMouseListener(this->lineJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mouseClicked(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_lineJButtonMouseClicked(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->lineJButton);
        JButton_setFont(this->rectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->rectJButton, "Rect");
        JButton_addMouseListener(this->rectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mouseClicked(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_rectJButtonMouseClicked(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->rectJButton);
        JButton_setFont(this->arcJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->arcJButton, "Arc");
        JButton_addMouseListener(this->arcJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_arcJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->arcJButton);
        JButton_setFont(this->stringJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->stringJButton, "String");
        JButton_addMouseListener(this->stringJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_stringJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->stringJButton);
        JButton_setFont(this->charJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->charJButton, "Char");
        JButton_addMouseListener(this->charJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_charJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->charJButton);
        JButton_setFont(this->roundRectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->roundRectJButton, "Round Rect");
        JButton_addMouseListener(this->roundRectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_roundRectJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->roundRectJButton);
        JButton_setFont(this->imageJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->imageJButton, "Image");
        JButton_addMouseListener(this->imageJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_imageJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->imageJButton);
        JButton_setFont(this->fillArcJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->fillArcJButton, "Fill Arc");
        JButton_addMouseListener(this->fillArcJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_fillArcJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->fillArcJButton);
        JButton_setFont(this->fillRectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->fillRectJButton, "Fill Rect");
        JButton_addMouseListener(this->fillRectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_fillRectJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->fillRectJButton);
        JButton_setFont(this->fillRoundRectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->fillRoundRectJButton, "Fill Rnd Rect");
        JButton_addMouseListener(this->fillRoundRectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_fillRoundRectJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->fillRoundRectJButton);
        JButton_setFont(this->dottedLineJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedLineJButton, "Dot Line");
        JButton_addMouseListener(this->dottedLineJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedLineJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedLineJButton);
        JButton_setFont(this->dottedRectButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedRectButton, "Dot Rect");
        JButton_addMouseListener(this->dottedRectButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedRectButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedRectButton);
        JButton_setFont(this->dottedArcJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedArcJButton, "Dot Arc");
        JButton_addMouseListener(this->dottedArcJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedArcJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedArcJButton);
        JButton_setFont(this->dottedFillRectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedFillRectJButton, "Dot Fill Rect");
        JButton_addMouseListener(this->dottedFillRectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedFillRectJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedFillRectJButton);
        JButton_setFont(this->dottedFillArcJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedFillArcJButton, "Dot Fill Arc");
        JButton_addMouseListener(this->dottedFillArcJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedFillArcJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedFillArcJButton);
        JButton_setFont(this->dottedFillRountRectJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->dottedFillRountRectJButton, "Dot Fill Rnd Rect");
        JButton_addMouseListener(this->dottedFillRountRectJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ToolJPanel_mousePressed(ToolJPanel* this, MouseEvent* evt) {
                ToolJPanel_dottedFillRountRectJButtonMousePressed(this, evt);
        }
#endif
);
        ToolJPanel_add(this, this->dottedFillRountRectJButton);
        JPanel_setLayout(this->colorJPanel, GridLayout_new(1, 1));
        JPanel_add(this->colorJPanel, this->colorJList);
        ToolJPanel_add(this, this->colorJPanel);
}


static void ToolJPanel_dottedFillRountRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedFillRountRectJButton));
}


static void ToolJPanel_dottedFillArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedFillArcJButton));
}


static void ToolJPanel_dottedFillRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedFillRectJButton));
}


static void ToolJPanel_dottedArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedArcJButton));
}


static void ToolJPanel_dottedRectButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedRectButton));
}


static void ToolJPanel_dottedLineJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->dottedLineJButton));
}


static void ToolJPanel_fillRoundRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->fillRoundRectJButton));
}


static void ToolJPanel_fillRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->fillRectJButton));
}


static void ToolJPanel_fillArcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->fillArcJButton));
}


static void ToolJPanel_imageJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->imageJButton));
}


static void ToolJPanel_roundRectJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->roundRectJButton));
}


static void ToolJPanel_charJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->charJButton));
}


static void ToolJPanel_stringJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->stringJButton));
}


static void ToolJPanel_arcJButtonMousePressed(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->arcJButton));
}


static void ToolJPanel_rectJButtonMouseClicked(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->rectJButton));
}


static void ToolJPanel_lineJButtonMouseClicked(ToolJPanel* this, MouseEvent* evt) {
        ToolFactory_setSelectedTool(ToolFactory_getInstance(), JButton_getText(this->lineJButton));
}

