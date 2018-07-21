object Form1: TForm1
  Left = 192
  Top = 127
  Width = 690
  Height = 473
  Caption = 'Download'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 73
    Height = 73
    Caption = #36899#32218
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 88
    Top = 8
    Width = 73
    Height = 73
    Caption = #35373#23450
    TabOrder = 1
    OnClick = Button2Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 88
    Width = 521
    Height = 345
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssBoth
    TabOrder = 2
  end
  object Button3: TButton
    Left = 536
    Top = 88
    Width = 113
    Height = 25
    Caption = 'Tool Offset'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 536
    Top = 120
    Width = 113
    Height = 25
    Caption = 'Parameter'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 536
    Top = 152
    Width = 113
    Height = 25
    Caption = 'Pitch'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 536
    Top = 184
    Width = 113
    Height = 25
    Caption = 'Macro'
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 536
    Top = 216
    Width = 113
    Height = 25
    Caption = 'Offset'
    TabOrder = 7
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 536
    Top = 248
    Width = 113
    Height = 25
    Caption = 'History'
    TabOrder = 8
    OnClick = Button8Click
  end
  object Panel1: TPanel
    Left = 424
    Top = 48
    Width = 105
    Height = 33
    BevelOuter = bvLowered
    TabOrder = 9
    Visible = False
    object Label1: TLabel
      Left = 8
      Top = 4
      Width = 81
      Height = 21
      Caption = 'Loading ... '
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = #24494#36575#27491#40657#39636
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object Timer1: TTimer
    Interval = 500
    OnTimer = Timer1Timer
    Left = 392
    Top = 48
  end
end
