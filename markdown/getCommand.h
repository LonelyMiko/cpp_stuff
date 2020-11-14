void getCommand(int type)
{
  switch (type)
  {
    case 1:
        writeHeading();
        break;
    case 2:
        writeBold();
        break;
    case 3:
        writeBoldAndItalic();
        break;
    case 4:
        blockquotes();
        break;
    case 5:
        code();
        break;
    case 6:
        writeItalic();
        break;
    case 7:
        link();
        break;
    case 8:
        writeList();
        break;
    case 0:
        return;
    default:
        std::cout << "Error";
        return;
  }
}
