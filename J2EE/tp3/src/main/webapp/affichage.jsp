<%@page import="java.util.ArrayList" %>
<%@page import="java.util.List" %>
<%@page import="com.Etudiant" %>

<html>
<body>
	<%
	List<Etudiant> et = (ArrayList<Etudiant>) request.getAttribute("etudiants");
	
	%>
	<% for(Etudiant etudiant : et){ %>
		<li><%=etudiant.getUsername() %> - <%=etudiant.getAge() %>
		<form method="post" action="Remove" style="display: inline;">
			<input type="hidden" value="<%=etudiant.getCin() %>" name="cin" />	
			<button>
				supprimer
			</button>
		</form>
		
	<%} %>
</body>
</html>