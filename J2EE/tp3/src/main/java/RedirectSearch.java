

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class RedirectSearch
 */
@WebServlet("/RedirectSearch")
public class RedirectSearch extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	boolean switchSearchEngine = true;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public RedirectSearch() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String search = request.getParameter("search");
		switchSearchEngine = !switchSearchEngine;
		if(switchSearchEngine) {
			response.sendRedirect("http://www.google.com/search?q=" + search);
		} else {
			response.sendRedirect("http://www.search.yahoo.com/search?p=" + search);
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
