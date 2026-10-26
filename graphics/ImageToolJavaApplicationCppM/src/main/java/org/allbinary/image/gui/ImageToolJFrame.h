
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/util/Arrays.h>

      
#include <java/util/Comparator.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/gui/dialog/FileJDialog.h>

      
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysis.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JFrame.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JTextField.h"
#include "JButton.h"
#include "JPanel.h"
#include "JMenuBar.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "GridLayout.h"
#include "ImageUnifierJPanel.h"
#include "ImageAnalysisResultsJPanel.h"
#include "RotationSpriteImageJPanel.h"
#include "SpriteSplitterImageJPanel.h"
#include "RotationImageJPanel.h"
#include "ResizeImageJPanel.h"
#include "CreateIconImagesJPanel.h"
#include "CanvasImageJPanel.h"
#include "MirrorSpriteImageJPanel.h"
#include "MirrorImageJPanel.h"

class ImageToolJFrame: public javax::swing::JFrame, public FileJDialogListenerInterface {

    private: static ImageProcessorInputCompositeInterface imageProcessorInputCompositeInterface;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: FileJDialog fileJDialog;

    private: ImageProcessorInput imageProcessorInput;

public: ImageToolJFrame();

    private: void initComponents();

    private: void createStripImageJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void processingJMenuActionPerformed(java::awt::event::ActionEvent evt);

    private: void openImageJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    public: void onFiles(std::vector<File> files);

    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent evt);

    private: void analyzeJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void generateRotationSpriteJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void generateSpriteSplitterMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void generateRotationMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void scaleImagesJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void createIconsJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void canvasImagesJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void generateMirrorSpriteMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void mirrorJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: ColorRangeInterface getColorRangeInterface();

    public: javax::swing::JTextField getMaxBlueJTextField();

    public: void setMaxBlueJTextField(javax::swing::JTextField maxBlueJTextField);

    public: javax::swing::JTextField getMaxGreenJTextField();

    public: void setMaxGreenJTextField(javax::swing::JTextField maxGreenJTextField);

    public: javax::swing::JTextField getMaxRedJTextField();

    public: void setMaxRedJTextField(javax::swing::JTextField maxRedJTextField);

    public: javax::swing::JTextField getMinBlueJTextField();

    public: void setMinBlueJTextField(javax::swing::JTextField minBlueJTextField);

    public: javax::swing::JTextField getMinGreenJTextField();

    public: void setMinGreenJTextField(javax::swing::JTextField minGreenJTextField);

    public: javax::swing::JTextField getMinRedJTextField();

    public: void setMinRedJTextField(javax::swing::JTextField minRedJTextField);

    private: javax::swing::JDialog analysisActionJDialog;

    private: javax::swing::JMenuItem analyzeJMenuItem;

    private: javax::swing::JLabel blueJLabel;

    private: javax::swing::JLabel colorRangeJLabel;

    private: javax::swing::JMenuItem createStripImageJMenuItem;

    private: javax::swing::JMenu fileJMenu;

    private: javax::swing::JMenuItem generateSpriteSplitterMenuItem;

    private: javax::swing::JMenuItem generateRotationMenuItem;

    private: javax::swing::JMenuItem generateMirrorSpriteMenuItem;

    private: javax::swing::JMenuItem generateRotationSpriteJMenuItem;

    private: javax::swing::JLabel greenJLabel;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JMenuBar mainJMenuBar;

    private: javax::swing::JTextField maxBlueJTextField;

    private: javax::swing::JTextField maxGreenJTextField;

    private: javax::swing::JLabel maxJLabel;

    private: javax::swing::JTextField maxRedJTextField;

    private: javax::swing::JTextField minBlueJTextField;

    private: javax::swing::JTextField minGreenJTextField;

    private: javax::swing::JLabel minJLabel;

    private: javax::swing::JTextField minRedJTextField;

    private: javax::swing::JMenuItem mirrorJMenuItem;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JMenuItem openImageJMenuItem;

    private: javax::swing::JMenu processingJMenu;

    private: javax::swing::JLabel redJLabel;

    private: javax::swing::JMenuItem scaleImagesJMenuItem;

    private: javax::swing::JMenuItem canvasImagesJMenuItem;

    private: javax::swing::JMenuItem createIconImagesJMenuItem;

    private: javax::swing::JLabel titleJLabel;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H
