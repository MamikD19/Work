echo "Please talk to me ..."
  read a
  case $a in
	1)
		echo "Hello yourself!"
		;;
	2)
		echo "See you again!"
		break
		;;
	*)
		echo "Sorry, I don't understand"
		;;
  esac

