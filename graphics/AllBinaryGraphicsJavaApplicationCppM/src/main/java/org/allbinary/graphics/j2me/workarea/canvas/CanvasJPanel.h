
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H

            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/animation/VectorExplosionGenerator.h>

      
#include <org/allbinary/animation/VectorMirrorGenerator.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/GraphicsException.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>

      
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "MouseListener.h"
#include "MouseMotionListener.h"
#include "KeyListener.h"
#include "IntegerDimension.h"
#include "CanvasTreeLabel.h"
#include "Color.h"
#include "Grid.h"
#include "Dimension.h"
#include "CanvasDom.h"
#include "GridLayout.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class CanvasJPanel: public javax::swing::JPanel, public java::awt::event::MouseListener, public java::awt::event::MouseMotionListener, public java::awt::event::KeyListener, public MyGraphicItemEventListener {

    private: static int32_t frame = 0;

    private: static const Color gridColor = Color(BasicColorFactory::getInstance().WHITE.intValue());

    private: static const Color backgroundColor = Color(BasicColorFactory::getInstance().CLEAR_COLOR.intValue());

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GuiLog guiLog = GuiLog::getInstance();

    private: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    private: GraphicItemInterface selectedTool = 
                nullptr
            ;

    private: HashMap<any, any> graphicItemHashMap;

    private: IntegerDimension canvasDimension;

    private: double angle = 0;

    private: DefaultMutableTreeNode canvasTreeNode;

    private: CanvasTreeLabel frameLabel;

    private: WorkAreaJTreeJPanel workAreaJTreeJPanel;

    private: Grid grid;

public: CanvasJPanel(WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, int32_t x, int32_t y);

public: CanvasJPanel(WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, CanvasDom canvasDom);

                //@Throws(Exception.constructor)
            
    private: void initMyComponents();

    public: MutableTreeNode getTreeNode();

    private: void initComponents();

                //@Throws(Exception.constructor)
            
    public: void setCanvasSize(int32_t x, int32_t y);

    public: void setGrid(GPoint point);

    public: void setGrid(int32_t xSize, int32_t ySize);

                //@Throws(Exception.constructor)
            
    public: void setDefaultGrid();

    public: double getAngle();

    public: void setAngle(double angle);

    public: void addAngle(double angle);

    public: void explodeAll();

                //@Throws(Exception.constructor)
            
    public: void explode(int32_t howMuch, int32_t explosionType);

                //@Throws(Exception.constructor)
            
    public: void mirror();

                //@Throws(Exception.constructor)
            
    public: void center();

    public: void setNewTool();

                //@Throws(Exception.constructor)
            
    public: void duplicateGraphicItem(GraphicItemInterface graphicItem);

                //@Throws(Exception.constructor)
            
    public: void duplicateGraphicItemHashMap(HashMap<any, any> hashMap);

    public: HashMap<any, any> getGraphicItemHashMap();

    public: int32_t getXPixelsPerWorkAreaPixel();

    public: int32_t getYPixelsPerWorkAreaPixel();

    public: GraphicItemInterface getSelectedTool();

    public: void drawItems(Graphics graphics);

    public: void drawGrid(Graphics graphics);

    public: void paint(Graphics graphics);

    public: void repaint();

                //@Throws(Exception.constructor)
            
    public: Node toDom();

    public: void changed();

    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent);

    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent);

    public: void mouseExited(java::awt::event::MouseEvent mouseEvent);

    public: void mousePressed(java::awt::event::MouseEvent mouseEvent);

    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent);

    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent);

    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent);

    private: std::string logMouseEvent(java::awt::event::MouseEvent mouseEvent);

    public: void keyPressed(java::awt::event::KeyEvent keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent keyEvent);

    public: void delete_(MyGraphicItemEvent evt);

    public: void deselect(MyGraphicItemEvent evt);

    public: void highlight(MyGraphicItemEvent evt);

                //@Throws(Exception.constructor)
            
    public: CanvasJPanel duplicate();

                //@Throws(Exception.constructor)
            
    public: void duplicate(MyGraphicItemEvent event);

    public: void rotate(MyGraphicItemEvent event);

    public: IntegerDimension getCanvasDimension();

    public: void setCanvasDimension(IntegerDimension canvasDimension);

    public: Grid getGrid();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H
